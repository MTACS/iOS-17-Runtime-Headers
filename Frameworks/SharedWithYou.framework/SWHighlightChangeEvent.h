
@interface SWHighlightChangeEvent : NSObject <SWHighlightEvent> {
    long long  _changeEventType;
    NSURL * _highlightURL;
}

@property (nonatomic, readonly) long long changeEventTrigger;
@property (nonatomic, readonly) long long changeEventType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *highlightURL;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeEventTrigger;
- (long long)changeEventType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlight:(id)arg1 trigger:(long long)arg2;
- (id)initWithHighlight:(id)arg1 type:(long long)arg2;
- (id)initWithHighlightURL:(id)arg1 type:(long long)arg2;

@end
