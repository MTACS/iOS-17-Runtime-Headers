
@interface _SWHighlightPersistenceEvent : SWHighlightPersistenceEvent <_SWHighlightEventProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *highlightURL;
@property (readonly) Class superclass;

- (id)initWithHighlight:(id)arg1 type:(long long)arg2;

@end
