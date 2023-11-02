
@interface WRWidgetRendererInitializationPayload : NSObject <NSSecureCoding> {
    NSDictionary * _configurations;
    NSSet * _extensions;
    NSData * _systemEnvironment;
}

@property (nonatomic, readonly) NSDictionary *configurations;
@property (nonatomic, readonly) NSSet *extensions;
@property (nonatomic, readonly) NSData *systemEnvironment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurations;
- (void)encodeWithCoder:(id)arg1;
- (id)extensions;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensions:(id)arg1 configurations:(id)arg2 systemEnvironment:(id)arg3;
- (id)systemEnvironment;

@end
