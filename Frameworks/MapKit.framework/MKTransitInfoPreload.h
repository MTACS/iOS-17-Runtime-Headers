
@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload> {
    NSAttributedString * _attributedString;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedString;
- (id)initWithAttributedString:(id)arg1;

@end
