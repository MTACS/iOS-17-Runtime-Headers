
@interface MROrigin : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    int  _identifier;
    bool  _local;
    bool  _locallyHosted;
    long long  _type;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, copy) NSString *displayName;
@property (getter=isHosted, nonatomic, readonly) bool hosted;
@property (nonatomic) int identifier;
@property (getter=isLocal, nonatomic) bool local;
@property (getter=isLocallyHosted, nonatomic) bool locallyHosted;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) _MROriginProtobuf *protobuf;
@property (nonatomic, readonly) MROrigin *skeleton;
@property (nonatomic) long long type;

+ (id)anyOrigin;
+ (id)localOrigin;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(int)arg1 type:(long long)arg2 displayName:(id)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHosted;
- (bool)isLocal;
- (bool)isLocallyHosted;
- (id)playerPath;
- (id)protobuf;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setLocal:(bool)arg1;
- (void)setLocallyHosted:(bool)arg1;
- (void)setType:(long long)arg1;
- (id)skeleton;
- (long long)type;

@end
