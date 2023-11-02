
@interface SWHighlightMentionEvent : NSObject <SWHighlightEvent> {
    NSURL * _highlightURL;
    NSString * _mentionedPersonHandle;
    _SWPersonIdentity * _mentionedPersonIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *highlightURL;
@property (nonatomic, readonly) NSString *mentionedPersonHandle;
@property (nonatomic, readonly) _SWPersonIdentity *mentionedPersonIdentity;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)highlightURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlight:(id)arg1 mentionedPersonCloudKitShareHandle:(id)arg2;
- (id)initWithHighlight:(id)arg1 mentionedPersonIdentity:(id)arg2;
- (id)initWithHighlightURL:(id)arg1 mentionedPersonHandle:(id)arg2 mentionedPersonIdentity:(id)arg3;
- (id)mentionedPersonHandle;
- (id)mentionedPersonIdentity;

@end
