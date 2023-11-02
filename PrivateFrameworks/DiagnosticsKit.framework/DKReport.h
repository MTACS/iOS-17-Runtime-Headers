
@interface DKReport : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _components;
}

@property (nonatomic, readonly) NSArray *components;

+ (id)reportWithComponents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrayForJSON;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (bool)isEmpty;
- (id)reportByMergingReport:(id)arg1;

@end
