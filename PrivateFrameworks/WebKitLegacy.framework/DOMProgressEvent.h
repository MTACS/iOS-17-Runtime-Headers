
@interface DOMProgressEvent : DOMEvent

@property (readonly) bool lengthComputable;
@property (readonly) unsigned long long loaded;
@property (readonly) unsigned long long total;

- (bool)lengthComputable;
- (unsigned long long)loaded;
- (unsigned long long)total;

@end
