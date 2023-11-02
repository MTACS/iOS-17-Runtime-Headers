
@interface LALocalizedString : NSObject

+ (id)cancel;
+ (id)enterPasscode;
+ (id)passcodeChangeBackoffMessage:(long long)arg1;
+ (id)passcodeChangeDone;
+ (id)passcodeChangeErrorInvalidPasscodeWithFailedAttemptsCount:(long long)arg1;
+ (id)passcodeChangeErrorNewPasscodeMismatchText;
+ (id)passcodeChangeErrorNewPasscodeMismatchTitle;
+ (id)passcodeChangeErrorPasscodeDoesNotMeetRequirementsText;
+ (id)passcodeChangeErrorPasscodeDoesNotMeetRequirementsTitle;
+ (id)passcodeChangeErrorPasscodeIsTooEasyText;
+ (id)passcodeChangeErrorPasscodeIsTooEasyTitle;
+ (id)passcodeChangeNewPasscode;
+ (id)passcodeChangeNewPasscodeVerify;
+ (id)passcodeChangeNext;
+ (id)passcodeChangeOldPasscode;
+ (id)passcodeChangeOptions;
+ (id)passcodeChangeTitle;
+ (id)passcodeChangeUseAnyway;
+ (id)passcodeChangeUseDifferentPasscode;
+ (id)passcodeRecoveryDisabledTitle;
+ (id)passcodeRecoveryEnabledTitle;
+ (id)passcodeRecoveryOldPasscode;
+ (id)passcodeRecoveryRecoveryDisabled;
+ (id)passcodeRecoveryRecoveryEnabled;
+ (id)passcodeRecoveryTitle;
+ (id)passcodeTypeAlphanumeric;
+ (id)passcodeTypeNone;
+ (id)passcodeTypeNumericCustomDigits;
+ (id)passcodeTypeNumericFourDigits;
+ (id)passcodeTypeNumericSixDigits;
+ (id)tryAgain;

@end
