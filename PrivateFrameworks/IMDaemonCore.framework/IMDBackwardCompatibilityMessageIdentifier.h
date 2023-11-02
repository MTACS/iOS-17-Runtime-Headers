
@interface IMDBackwardCompatibilityMessageIdentifier : NSObject {
    __IMDBackwardCompatibilityMessageIdentifier * _swiftImplementation;
}

@property (nonatomic, retain) __IMDBackwardCompatibilityMessageIdentifier *swiftImplementation;

+ (id)sharedIdentifier;

- (void).cxx_destruct;
- (id)init;
- (bool)isIgnorableBackwardCompatibilityMessage:(id)arg1 inChat:(id)arg2;
- (void)setSwiftImplementation:(id)arg1;
- (id)swiftImplementation;

@end
