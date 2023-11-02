
@interface CNAutocompleteSupplementalGroupRecipient : NSObject {
    NSString * _identifier;
    NSArray * _members;
    NSString * _title;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSArray *members;
@property (readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3;
- (id)members;
- (id)title;

@end
