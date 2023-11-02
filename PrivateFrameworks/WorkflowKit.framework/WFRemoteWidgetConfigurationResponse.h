
@interface WFRemoteWidgetConfigurationResponse : NSObject <NSSecureCoding> {
    NSError * _error;
}

@property (nonatomic, readonly) NSError *error;

+ (id)fromSecureData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)secureData;

@end
