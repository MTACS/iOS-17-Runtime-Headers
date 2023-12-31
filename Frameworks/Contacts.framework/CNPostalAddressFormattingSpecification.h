
@interface CNPostalAddressFormattingSpecification : NSObject {
    NSArray * _displayFieldArrangement;
    NSArray * _editingFieldArrangement;
    NSDictionary * _fieldLabelMap;
}

@property (nonatomic, readonly) NSArray *displayFieldArrangement;
@property (nonatomic, readonly) NSArray *editingFieldArrangement;
@property (nonatomic, readonly) NSDictionary *fieldLabelMap;

- (void).cxx_destruct;
- (id)displayFieldArrangement;
- (id)editingFieldArrangement;
- (id)fieldLabelMap;
- (id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3;
- (id)localizedPlaceholderForKey:(id)arg1;

@end
