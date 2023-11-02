
@interface CNContactCardFieldSection : NSObject {
    NSString * _displayTitle;
    NSArray * _items;
    NSString * _sectionType;
}

@property (nonatomic, readonly) NSString *displayTitle;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *sectionType;

- (void).cxx_destruct;
- (id)displayTitle;
- (id)initWithSectionType:(id)arg1 items:(id)arg2;
- (id)initWithSectionType:(id)arg1 items:(id)arg2 displayTitle:(id)arg3;
- (id)items;
- (id)sectionType;

@end
