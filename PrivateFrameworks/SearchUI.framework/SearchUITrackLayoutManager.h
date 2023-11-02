
@interface SearchUITrackLayoutManager : NSObject {
    TLKGridLayoutManager * _layoutManager;
    NSMapTable * _tableMapping;
}

@property (nonatomic, retain) TLKGridLayoutManager *layoutManager;
@property (nonatomic, retain) NSMapTable *tableMapping;

+ (id)singleLineTextWithString:(id)arg1 highlighted:(bool)arg2;

- (void).cxx_destruct;
- (id)initWithTrackCardSection:(id)arg1;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (void)setTableMapping:(id)arg1;
- (id)tableMapping;
- (id)tableRowForTrack:(id)arg1;

@end
