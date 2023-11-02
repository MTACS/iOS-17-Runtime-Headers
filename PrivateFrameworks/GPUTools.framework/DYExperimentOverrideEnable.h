
@interface DYExperimentOverrideEnable : DYExperiment <NSCopying, NSSecureCoding> {
    NSSet * _overrideTypeStrings;
    NSArray * _perFunctionProfilingData;
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly, retain) NSSet *overrideTypeStrings;
@property (nonatomic, readonly, retain) NSMutableDictionary *properties;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 captureArchivePath:(id)arg2 overrides:(id)arg3;
- (bool)isPresentFrameEnabled;
- (id)overrideTypeStrings;
- (id)properties;

@end
