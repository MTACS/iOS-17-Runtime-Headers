
@interface URTAlert : NSObject <NSSecureCoding> {
    NSArray * _allowedApplicationBundleIDs;
    URTAlertAction * _cancelAction;
    URTAlertAction * _defaultAction;
    NSString * _identifier;
    NSString * _message;
    URTAlertAction * _otherAction;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *allowedApplicationBundleIDs;
@property (nonatomic, retain) URTAlertAction *cancelAction;
@property (nonatomic, retain) URTAlertAction *defaultAction;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, retain) URTAlertAction *otherAction;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedApplicationBundleIDs;
- (id)cancelAction;
- (id)defaultAction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)otherAction;
- (void)setAllowedApplicationBundleIDs:(id)arg1;
- (void)setCancelAction:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setOtherAction:(id)arg1;
- (id)title;
- (id)userNotificationRepresentation;

@end
