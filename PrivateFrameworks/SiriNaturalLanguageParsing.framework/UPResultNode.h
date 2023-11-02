
@interface UPResultNode : NSObject {
    NSString * _label;
}

@property (readonly, copy) NSString *label;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithLabel:(id)arg1;
- (id)label;

@end
