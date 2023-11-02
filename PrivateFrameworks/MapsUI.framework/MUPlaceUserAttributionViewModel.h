
@interface MUPlaceUserAttributionViewModel : NSObject {
    NSString * _attributionName;
}

@property (nonatomic, copy) NSString *attributionName;
@property (nonatomic, readonly) bool showFullAttributionName;

- (void).cxx_destruct;
- (id)attributionName;
- (id)initWithAttributionName:(id)arg1;
- (void)setAttributionName:(id)arg1;
- (bool)showFullAttributionName;

@end
