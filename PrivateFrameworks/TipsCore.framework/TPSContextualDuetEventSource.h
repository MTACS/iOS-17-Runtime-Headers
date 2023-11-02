
@interface TPSContextualDuetEventSource : TPSSerializableObject {
    NSString * _bundleID;
    NSString * _sourceID;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *sourceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;

@end
