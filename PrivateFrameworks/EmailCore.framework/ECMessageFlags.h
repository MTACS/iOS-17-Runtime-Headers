
@interface ECMessageFlags : NSObject <ECMessageFlagsBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    union ECMessageFlagsHashedBitField { 
        unsigned long long hashValue; 
        struct { 
            unsigned int read : 1; 
            unsigned int deleted : 1; 
            unsigned int replied : 1; 
            unsigned int flagged : 1; 
            unsigned int draft : 1; 
            unsigned int forwarded : 1; 
            unsigned int redirected : 1; 
            unsigned int junkLevelSetByUser : 1; 
            unsigned int junkLevel : 2; 
            unsigned int flagColor : 3; 
        } bitField; 
    }  _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool draft;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic) unsigned long long flagColor;
@property (nonatomic) bool flagged;
@property (nonatomic) bool forwarded;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long junkLevel;
@property (nonatomic) bool junkLevelSetByUser;
@property (nonatomic) bool read;
@property (nonatomic) bool redirected;
@property (nonatomic) bool replied;
@property (readonly) Class superclass;

+ (id)cachedFlagsWithHash:(unsigned long long)arg1 generator:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (id)_flagColorDebugDescription;
- (id)_junkLevelDebugDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (bool)deleted;
- (id)description;
- (bool)draft;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flagColor;
- (bool)flagged;
- (bool)forwarded;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHash:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)junkLevel;
- (bool)junkLevelSetByUser;
- (bool)read;
- (bool)redirected;
- (bool)replied;
- (void)setDeleted:(bool)arg1;
- (void)setDraft:(bool)arg1;
- (void)setFlagColor:(unsigned long long)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setForwarded:(bool)arg1;
- (void)setJunkLevel:(unsigned long long)arg1;
- (void)setJunkLevelSetByUser:(bool)arg1;
- (void)setRead:(bool)arg1;
- (void)setRedirected:(bool)arg1;
- (void)setReplied:(bool)arg1;

@end
