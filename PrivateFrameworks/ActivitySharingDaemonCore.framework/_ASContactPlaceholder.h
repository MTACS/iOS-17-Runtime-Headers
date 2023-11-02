
@interface _ASContactPlaceholder : NSObject {
    ASContact * _contact;
    id  _token;
}

@property (nonatomic, retain) ASContact *contact;
@property (nonatomic, retain) id token;

- (void).cxx_destruct;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
