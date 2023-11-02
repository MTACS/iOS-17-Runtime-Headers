
@interface VUISyndicationConfig : NSObject {
    unsigned long long  _highlightsFetchLimit;
}

@property (nonatomic) unsigned long long highlightsFetchLimit;

- (unsigned long long)highlightsFetchLimit;
- (id)init;
- (void)setHighlightsFetchLimit:(unsigned long long)arg1;

@end
