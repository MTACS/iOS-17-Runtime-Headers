
@interface PKPayLaterStackedLabelRow : NSObject <PKPayLaterCollectionViewRow> {
    double  _paddingBetweenRows;
    NSArray * _sources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) double paddingBetweenRows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithSources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)paddingBetweenRows;
- (void)setPaddingBetweenRows:(double)arg1;

@end
