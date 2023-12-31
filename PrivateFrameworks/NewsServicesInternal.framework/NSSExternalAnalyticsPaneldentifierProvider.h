
@interface NSSExternalAnalyticsPaneldentifierProvider : NSObject {
    NSArray * _hostNames;
    NSString * _panelIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *hostNames;
@property (nonatomic, readonly) NSString *panelIdentifier;

- (void).cxx_destruct;
- (id)hostNames;
- (id)initWithHostNames:(id)arg1;
- (id)panelIdentifier;
- (id)panelIdentifierWithHostNames:(id)arg1;

@end
