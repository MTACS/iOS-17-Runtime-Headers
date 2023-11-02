
@interface TTSSynthesisProviderComponentRecord : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    NSString * _containerBundleIdentifier;
    bool  _isFirstParty;
    NSNumber * _parameterCount;
    NSString * _version;
    NSArray * _voices;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (nonatomic, retain) NSString *containerBundleIdentifier;
@property (nonatomic) bool isFirstParty;
@property (nonatomic, retain) NSNumber *parameterCount;
@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) NSArray *voices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (id)containerBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFirstParty;
- (id)parameterCount;
- (void)setBundleIdentifier:(id)arg1;
- (void)setComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setContainerBundleIdentifier:(id)arg1;
- (void)setIsFirstParty:(bool)arg1;
- (void)setParameterCount:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setVoices:(id)arg1;
- (id)version;
- (id)voices;

@end
