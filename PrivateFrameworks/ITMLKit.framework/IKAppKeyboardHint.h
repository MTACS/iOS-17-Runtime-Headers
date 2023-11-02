
@interface IKAppKeyboardHint : NSObject {
    NSString * _badge;
    NSString * _searchTerm;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *badge;
@property (nonatomic, readonly, copy) NSString *searchTerm;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (id)badge;
- (id)initWithBadge:(id)arg1 text:(id)arg2 searchTerm:(id)arg3;
- (id)searchTerm;
- (id)text;

@end
