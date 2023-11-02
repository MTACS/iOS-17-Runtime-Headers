
@interface _ICQOpportunityBubbleImageDetails : NSObject {
    NSString * _urlFor1x;
    NSString * _urlFor2x;
    NSString * _urlFor3x;
}

@property (nonatomic, copy) NSString *urlFor1x;
@property (nonatomic, copy) NSString *urlFor2x;
@property (nonatomic, copy) NSString *urlFor3x;

- (void).cxx_destruct;
- (id)getURLForScale:(long long)arg1;
- (id)initWithServerDictionary:(id)arg1;
- (void)setUrlFor1x:(id)arg1;
- (void)setUrlFor2x:(id)arg1;
- (void)setUrlFor3x:(id)arg1;
- (id)urlFor1x;
- (id)urlFor2x;
- (id)urlFor3x;

@end
