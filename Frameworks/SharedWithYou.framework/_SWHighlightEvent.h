
@interface _SWHighlightEvent : NSObject <SWHighlightEventProtocol> {
    long long  _action;
    NSURL * _highlightURL;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *highlightURL;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlight:(id)arg1 action:(long long)arg2;
- (id)initWithHighlightURL:(id)arg1 action:(long long)arg2;

@end
