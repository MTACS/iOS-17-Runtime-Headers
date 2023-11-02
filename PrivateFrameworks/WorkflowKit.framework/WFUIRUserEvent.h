
@interface WFUIRUserEvent : NSObject <NSSecureCoding> {
    NSString * _actionName;
    double  _delay;
    NSString * _localizedActionName;
    NSString * _processName;
    NSData * _screenCaptureData;
    double  _timeout;
    NSArray * _uiEvents;
    NSString * _userDescription;
}

@property (nonatomic, readonly) NSString *actionName;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) NSString *localizedActionName;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSData *screenCaptureData;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) NSArray *uiEvents;
@property (nonatomic, readonly) NSString *userDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)localizedActionName;
- (id)processName;
- (id)screenCaptureData;
- (id)serializedRepresentation;
- (double)timeout;
- (id)uiEvents;
- (id)userDescription;

@end
