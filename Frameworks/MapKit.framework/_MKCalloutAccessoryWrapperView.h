
@interface _MKCalloutAccessoryWrapperView : UIView <_MKCalloutAccessoryView> {
    UIView<_MKCalloutAccessoryView> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mapkit_accessoryControlToExtendWithCallout;
- (id)initWithView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
