
@interface GEOMediaLink : NSObject {
    NSString * _adamID;
    int  _mediaSubType;
    int  _mediaType;
    unsigned long long  _position;
    long long  _relatedCollectionItemIndex;
    NSArray * _thirdPartyLinks;
}

@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) int mediaSubType;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) unsigned long long position;
@property (nonatomic, readonly) long long relatedCollectionItemIndex;
@property (nonatomic, readonly) NSArray *thirdPartyLinks;

+ (id)mediaLinkFromProto:(id)arg1;

- (void).cxx_destruct;
- (id)adamID;
- (id)initWithAdamID:(id)arg1 mediaType:(int)arg2 mediaSubType:(int)arg3 thirdPartyLinks:(id)arg4 relatedCollectionItemIndex:(long long)arg5 position:(unsigned long long)arg6;
- (int)mediaSubType;
- (int)mediaType;
- (unsigned long long)position;
- (long long)relatedCollectionItemIndex;
- (id)thirdPartyLinks;

@end
