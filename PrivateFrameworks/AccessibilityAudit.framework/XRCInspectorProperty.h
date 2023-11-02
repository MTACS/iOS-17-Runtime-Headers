
@interface XRCInspectorProperty : NSObject {
    <XRCInspectorPropertyDelegate> * _delegate;
    AXAuditElement * _element;
    AXAuditElementAttribute * _elementAttribute;
    id  _value;
    id  _valueForDisplayOverride;
    bool  _valueKnown;
}

@property (nonatomic) <XRCInspectorPropertyDelegate> *delegate;
@property (nonatomic, retain) AXAuditElement *element;
@property (nonatomic, retain) AXAuditElementAttribute *elementAttribute;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) id valueForDisplayOverride;
@property (nonatomic) bool valueKnown;

+ (void)_continueFetchingProperties:(id)arg1 fetchedProperties:(id)arg2 fetchedValues:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)fetchValuesForProperties:(id)arg1 completionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_OSXConstantsToSelectorsDict;
- (id)_OSXSelectorForAction:(id)arg1;
- (id)_OSXSelectorForAttribute:(id)arg1;
- (id)_spacedStringFromCamelCase:(id)arg1;
- (id)delegate;
- (id)description;
- (id)element;
- (id)elementAttribute;
- (void)fetchValueWithCompletionBlock:(id /* block */)arg1;
- (void)focusOnElement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)performAction;
- (void)previewElement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setElementAttribute:(id)arg1;
- (void)setNewValue:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueForDisplayOverride:(id)arg1;
- (void)setValueKnown:(bool)arg1;
- (bool)showElementClassName;
- (bool)showIgnoredElements;
- (id)title;
- (id)value;
- (id)valueForDisplayOverride;
- (bool)valueKnown;

@end
