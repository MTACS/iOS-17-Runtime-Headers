
@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput {
    NSString * __name;
}

@property (nonatomic, copy) NSString *_name;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;
+ (id)videoFileInputWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_name;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isVideoFile;
- (id)name;
- (id)plistDictionary;
- (void)set_name:(id)arg1;
- (bool)supportsExpressions;
- (unsigned long long)trackingType;
- (id)uniqueIdentifier;

@end
