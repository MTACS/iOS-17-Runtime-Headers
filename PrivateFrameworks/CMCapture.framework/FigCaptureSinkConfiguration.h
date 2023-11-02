
@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying, NSSecureCoding> {
    NSString * _sinkID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sinkID;
@property (nonatomic, readonly) int sinkType;
@property (readonly) Class superclass;

+ (id)stringForSinkType:(int)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (int)sinkType;

@end
