
@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, _NSParagraphStyleMarkdownSettings> {
    double  _defaultTabInterval;
    id  _extraData;
    double  _firstLineHeadIndent;
    struct { 
        unsigned int alignment : 4; 
        unsigned int lineBreakMode : 4; 
        unsigned int tabStopsIsMutable : 1; 
        unsigned int isNaturalDirection : 1; 
        unsigned int rightToLeftDirection : 1; 
        unsigned int fixedMultiple : 2; 
        unsigned int tightensForTruncation : 1; 
        unsigned int refCount : 18; 
        unsigned int spansAllLines : 1; 
    }  _flags;
    double  _headIndent;
    double  _lineSpacing;
    double  _maximumLineHeight;
    double  _minimumLineHeight;
    double  _paragraphSpacing;
    NSArray * _tabStops;
    double  _tailIndent;
}

@property (readonly) long long _listIntentOrdinal;
@property (nonatomic, readonly, copy) NSArray *_presentationIntents;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, readonly) long long baseWritingDirection;
@property (nonatomic, readonly, copy) NSString *codeBlockIntentLanguageHint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultTabInterval;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstLineHeadIndent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headIndent;
@property (readonly) long long headerLevel;
@property (nonatomic, readonly) float hyphenationFactor;
@property (nonatomic, readonly) long long lineBreakMode;
@property (nonatomic, readonly) unsigned long long lineBreakStrategy;
@property (nonatomic, readonly) double lineHeightMultiple;
@property (nonatomic, readonly) double lineSpacing;
@property (readonly) long long listIntentOrdinal;
@property (nonatomic, readonly) double maximumLineHeight;
@property (nonatomic, readonly) double minimumLineHeight;
@property (nonatomic, readonly) double paragraphSpacing;
@property (nonatomic, readonly) double paragraphSpacingBefore;
@property (nonatomic, readonly, copy) NSArray *presentationIntents;
@property (readonly) Class superclass;
@property (readonly) bool swiftUI_spansAllLines;
@property (nonatomic, readonly, copy) NSArray *tabStops;
@property (nonatomic, readonly) double tailIndent;
@property (nonatomic, readonly, copy) NSArray *textLists;
@property (nonatomic, readonly) bool usesDefaultHyphenation;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (float)_defaultHyphenationFactor;
+ (long long)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (long long)defaultWritingDirectionForLanguage:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_alignmentFollowsWritingDirection;
- (void)_allocExtraData;
- (id)_initWithParagraphStyle:(id)arg1;
- (bool)_isSuitableForFastStringDrawingWithAlignment:(long long*)arg1 mirrorsTextAlignment:(bool)arg2 lineBreakMode:(long long*)arg3 tighteningFactorForTruncation:(double*)arg4;
- (unsigned long long)_lineBoundsOptions;
- (long long)_listIntentOrdinal;
- (id)_presentationIntents;
- (long long)alignment;
- (bool)allowsDefaultTighteningForTruncation;
- (bool)allowsHangingPunctuation;
- (long long)baseWritingDirection;
- (id)codeBlockIntentLanguageHint;
- (long long)compositionLanguage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)defaultTabInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)firstLineHeadIndent;
- (unsigned long long)hash;
- (double)headIndent;
- (long long)headerLevel;
- (long long)horizontalAlignment;
- (float)hyphenationFactor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFullyJustified;
- (long long)lineBreakMode;
- (unsigned long long)lineBreakStrategy;
- (double)lineHeightMultiple;
- (double)lineSpacing;
- (long long)listIntentOrdinal;
- (double)maximumLineHeight;
- (double)minimumLineHeight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)paragraphSpacing;
- (double)paragraphSpacingBefore;
- (id)presentationIntents;
- (bool)spansAllLines;
- (id)tabStops;
- (double)tailIndent;
- (id)textBlocks;
- (id)textLists;
- (float)tighteningFactorForTruncation;
- (bool)usesDefaultHyphenation;
- (bool)usesOpticalAlignment;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (bool)swiftUI_spansAllLines;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

- (id)paragraphStyleWithBaseWritingDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (bool)dc_isRTL;
+ (id)dc_mutableDefaultParagraphStyle;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (id)juParagraphStyleWithBaseWritingDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)ic_isRTL;
+ (id)ic_mutableDefaultParagraphStyle;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (id)paragraphStyleWithBaseWritingDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (id)ttr_textLists;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_paragraphStyleWithBaseWritingDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit

- (id)tv_paragraphStyleWithBaseWritingDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore

- (id)tf_paragraphStyleWithBaseWritingDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (long long)_ui_resolvedTextAlignment;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (id)paragraphStyleWithBaseWritingDirection:(long long)arg1;

@end
