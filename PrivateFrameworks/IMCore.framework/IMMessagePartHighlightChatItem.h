
@interface IMMessagePartHighlightChatItem : IMMessageChatItem {
    bool  _highlightedMessageIsFromMe;
    NSString * _highlightedMessagePartGUID;
    unsigned long long  _highlightedMessagePartIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _highlightedMessagePartRange;
}

@property (nonatomic, readonly) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; } geometryDescriptor;
@property (nonatomic, readonly) bool highlightedMessageIsFromMe;
@property (nonatomic, readonly) NSString *highlightedMessagePartGUID;
@property (nonatomic, readonly) unsigned long long highlightedMessagePartIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } highlightedMessagePartRange;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 highlightedMessagePartGUID:(id)arg2 highlightedMessagePartIndex:(long long)arg3 highlightedMessagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; })geometryDescriptor;
- (bool)highlightedMessageIsFromMe;
- (id)highlightedMessagePartGUID;
- (unsigned long long)highlightedMessagePartIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })highlightedMessagePartRange;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
