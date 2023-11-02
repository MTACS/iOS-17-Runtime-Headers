
@interface AMSDialogResult : NSObject <NSSecureCoding> {
    AMSDialogRequest * _originalRequest;
    NSString * _selectedActionIdentifier;
    NSArray * _textfieldValues;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, readonly) AMSDialogRequest *originalRequest;
@property (nonatomic, copy) NSString *selectedActionIdentifier;
@property (nonatomic, copy) NSArray *textfieldValues;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 selectedActionIdentifier:(id)arg2;
- (id)originalRequest;
- (id)selectedActionIdentifier;
- (void)setSelectedActionIdentifier:(id)arg1;
- (void)setTextfieldValues:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)textfieldValues;
- (id)userInfo;

@end
