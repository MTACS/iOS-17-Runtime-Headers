
@interface RWIProtocolCSSStyleId : RWIProtocolJSONObject

@property (nonatomic) int ordinal;
@property (nonatomic, copy) NSString *styleSheetId;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2;
- (int)ordinal;
- (void)setOrdinal:(int)arg1;
- (void)setStyleSheetId:(id)arg1;
- (id)styleSheetId;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithStyleSheetId:(id)arg1 ordinal:(int)arg2;

@end
