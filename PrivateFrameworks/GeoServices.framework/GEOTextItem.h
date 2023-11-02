
@interface GEOTextItem : NSObject <GEOTextItem> {
    NSString * _primaryText;
}

@property (nonatomic, readonly) NSString *primaryText;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPrimaryText:(id)arg1;
- (id)initWithTextItem:(id)arg1;
- (id)primaryText;

@end
