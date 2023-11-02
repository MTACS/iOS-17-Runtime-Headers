
@interface TVHighlightGroup : NSObject {
    NSArray * _highlights;
    NSString * _localizedName;
}

@property (nonatomic, retain) NSArray *highlights;
@property (nonatomic, retain) NSString *localizedName;

- (void).cxx_destruct;
- (id)highlights;
- (id)localizedName;
- (void)setHighlights:(id)arg1;
- (void)setLocalizedName:(id)arg1;

@end
