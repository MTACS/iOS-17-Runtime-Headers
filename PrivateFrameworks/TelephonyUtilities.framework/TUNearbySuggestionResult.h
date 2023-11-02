
@interface TUNearbySuggestionResult : NSObject <NSSecureCoding> {
    TUConversationActivity * _selectedActivity;
    TUNearbySuggestion * _suggestion;
    long long  _type;
}

@property (nonatomic, readonly) TUConversationActivity *selectedActivity;
@property (nonatomic, readonly) TUNearbySuggestion *suggestion;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1 selectedActivity:(id)arg2 type:(long long)arg3;
- (id)selectedActivity;
- (id)suggestion;
- (long long)type;

@end
