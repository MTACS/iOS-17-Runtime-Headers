
@interface MKTransitText : NSObject <GEOTransitTextDataSource> {
    <GEOServerFormattedString> * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOServerFormattedString> *text;

- (void).cxx_destruct;
- (id)initWithFormattedString:(id)arg1;
- (id)text;

@end
