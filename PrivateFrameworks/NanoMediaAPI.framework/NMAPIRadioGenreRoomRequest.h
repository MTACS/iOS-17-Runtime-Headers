
@interface NMAPIRadioGenreRoomRequest : NMAPIRequest {
    NSURL * _URL;
}

@property (nonatomic, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (id)_bagRoomURLRegularExpressionWithStoreURLBag:(id)arg1;
- (id)_roomIdentifierWithStoreURLBag:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithURL:(id)arg1;
- (Class)responseParserClass;
- (void)setURL:(id)arg1;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
