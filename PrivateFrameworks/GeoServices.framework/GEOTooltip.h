
@interface GEOTooltip : NSObject {
    NSString * _actionLink;
    <GEOMapItemPhoto> * _photo;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *actionLink;
@property (nonatomic, readonly) <GEOMapItemPhoto> *photo;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)actionLink;
- (id)initWithPDTooltip:(id)arg1;
- (id)photo;
- (id)subtitle;
- (id)title;

@end
