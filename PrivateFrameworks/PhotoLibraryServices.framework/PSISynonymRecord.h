
@interface PSISynonymRecord : NSObject {
    short  _category;
    NSString * _identifier;
    NSString * _synonym;
}

@property (nonatomic) short category;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *synonym;

- (void).cxx_destruct;
- (short)category;
- (id)identifier;
- (id)initWithSynonym:(id)arg1 category:(short)arg2 identifier:(id)arg3;
- (void)setCategory:(short)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSynonym:(id)arg1;
- (id)synonym;

@end
