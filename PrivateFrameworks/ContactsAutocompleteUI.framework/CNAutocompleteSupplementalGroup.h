
@interface CNAutocompleteSupplementalGroup : NSObject {
    NSArray * _groupMembers;
    NSString * _identifier;
    NSString * _title;
}

@property (readonly, copy) NSArray *groupMembers;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)groupMembers;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 members:(id)arg3;
- (id)title;

@end
