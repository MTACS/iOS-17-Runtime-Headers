
@interface _CPSearchViewDisappearFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSearchViewDisappearFeedback> {
    unsigned long long  _timestamp;
    int  _viewDisappearEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int viewDisappearEvent;

- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewDisappearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewDisappearEvent;
- (void)writeTo:(id)arg1;

@end
