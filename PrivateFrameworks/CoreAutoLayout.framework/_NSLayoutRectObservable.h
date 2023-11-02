
@interface _NSLayoutRectObservable : NSObservationSource {
    NSArray * _anchorObservations;
    <NSLayoutItem> * _layoutItem;
    NSLayoutRect * _rectangle;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;

- (void)dealloc;

@end
