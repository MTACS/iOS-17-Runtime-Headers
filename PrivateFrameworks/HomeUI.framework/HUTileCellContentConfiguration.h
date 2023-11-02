
@interface HUTileCellContentConfiguration : NSObject {
    void configuration;
}

@property (nonatomic) bool descriptionHidden;
@property (nonatomic) bool prefixHidden;
@property (nonatomic) bool titleHidden;

- (void).cxx_destruct;
- (bool)descriptionHidden;
- (id)init;
- (bool)prefixHidden;
- (void)setDescriptionHidden:(bool)arg1;
- (void)setPrefixHidden:(bool)arg1;
- (void)setTitleHidden:(bool)arg1;
- (bool)titleHidden;
- (id)updatedForItem:(id)arg1;

@end
