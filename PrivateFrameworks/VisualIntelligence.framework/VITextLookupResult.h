
@interface VITextLookupResult : NSObject <NSCopying> {
    NSArray * _sections;
}

@property (nonatomic, readonly) NSArray *sections;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSections:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sections;

@end
