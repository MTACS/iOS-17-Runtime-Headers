
@interface SWCachedHighlightEvent : NSObject <NSCopying> {
    <SWHighlightEvent> * _event;
    SWHighlight * _highlight;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) <SWHighlightEvent> *event;
@property (nonatomic, readonly) SWHighlight *highlight;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)cachedEvent:(id)arg1 forHighlight:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)event;
- (id)highlight;
- (id)initWithEvent:(id)arg1 forHighlight:(id)arg2;
- (id)uuid;

@end
