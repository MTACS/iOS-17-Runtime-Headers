
@interface _CHSWidgetHostForConnection : NSObject {
    unsigned long long  _activationState;
    CHSWidgetConfiguration * _configuration;
    NSString * _identifier;
}

@property (nonatomic, readonly) unsigned long long activationState;
@property (nonatomic, readonly) CHSWidgetConfiguration *configuration;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (unsigned long long)activationState;
- (id)configuration;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2 activationState:(unsigned long long)arg3;

@end
