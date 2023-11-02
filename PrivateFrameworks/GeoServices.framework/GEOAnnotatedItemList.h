
@interface GEOAnnotatedItemList : NSObject <GEOAnnotatedItemList> {
    int  _annotatedItemStyle;
    GEOMapItemAttribution * _attribution;
    <GEOPictureItemContainer> * _pictureItemContainer;
    <GEOTextItemContainer> * _textItemContainer;
    NSString * _title;
}

@property (nonatomic, readonly) int annotatedItemStyle;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (nonatomic, readonly) <GEOPictureItemContainer> *pictureItemContainer;
@property (nonatomic, readonly) <GEOTextItemContainer> *textItemContainer;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (int)annotatedItemStyle;
- (id)attribution;
- (id)init;
- (id)initWithAnnotatedItemList:(id)arg1 attribution:(id)arg2;
- (id)initWithPictureItemContainer:(id)arg1 textItemContainer:(id)arg2 title:(id)arg3 annotatedItemStyle:(int)arg4 attribution:(id)arg5;
- (id)pictureItemContainer;
- (id)textItemContainer;
- (id)title;

@end
