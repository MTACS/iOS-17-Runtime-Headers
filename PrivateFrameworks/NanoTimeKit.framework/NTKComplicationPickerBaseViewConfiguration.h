
@interface NTKComplicationPickerBaseViewConfiguration : NSObject {
    <NTKComplicationPickerListProvider> * _listProvider;
}

@property (nonatomic, readonly) <NTKComplicationPickerListProvider> *listProvider;

- (void).cxx_destruct;
- (id)initWithListProvider:(id)arg1;
- (id)listProvider;

@end
