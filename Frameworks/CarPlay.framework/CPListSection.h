
@interface CPListSection : NSObject <NSSecureCoding> {
    NSString * _header;
    CPButton * _headerButton;
    UIImage * _headerImage;
    NSString * _headerSubtitle;
    NSUUID * _identifier;
    long long  _index;
    NSArray * _items;
    CPListTemplate * _listTemplate;
    unsigned long long  _sectionHeaderStyle;
    NSString * _sectionIndexTitle;
}

@property (nonatomic, readonly, copy) NSString *header;
@property (nonatomic, readonly, copy) CPButton *headerButton;
@property (nonatomic, copy) UIImage *headerImage;
@property (nonatomic, readonly, copy) NSString *headerSubtitle;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) long long index;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) CPListTemplate *listTemplate;
@property (nonatomic) unsigned long long sectionHeaderStyle;
@property (nonatomic, readonly, copy) NSString *sectionIndexTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithItems:(id)arg1 header:(id)arg2 headerSubtitle:(id)arg3 headerImage:(id)arg4 headerButton:(id)arg5 sectionIndexTitle:(id)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)header;
- (id)headerButton;
- (id)headerImage;
- (id)headerSubtitle;
- (id)identifier;
- (long long)index;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 header:(id)arg2 headerSubtitle:(id)arg3 headerImage:(id)arg4 headerButton:(id)arg5 sectionIndexTitle:(id)arg6;
- (id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (id)listTemplate;
- (long long)numberOfItems;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)replaceItems:(id)arg1;
- (unsigned long long)sectionHeaderStyle;
- (id)sectionIndexTitle;
- (void)setHeaderImage:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setListTemplate:(id)arg1;
- (void)setSectionHeaderStyle:(unsigned long long)arg1;

@end
