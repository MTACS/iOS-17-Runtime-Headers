
@interface DMCManagedBookPayload : MCPayload {
    MDMBook * _book;
}

@property (nonatomic, retain) MDMBook *book;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)book;
- (id)initWithBook:(id)arg1;
- (void)setBook:(id)arg1;
- (id)title;

@end
