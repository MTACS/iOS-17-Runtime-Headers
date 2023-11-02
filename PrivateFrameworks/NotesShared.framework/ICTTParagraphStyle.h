
@interface ICTTParagraphStyle : NSObject <ICTTModelAttributeComparable, NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _alignment;
    unsigned long long  _blockQuoteLevel;
    unsigned int  _hints;
    unsigned long long  _indent;
    bool  _needsListCleanup;
    bool  _needsParagraphCleanup;
    unsigned long long  _startingItemNumber;
    unsigned int  _style;
    ICTTTodo * _todo;
    NSUUID * _uuid;
    long long  _writingDirection;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) long long alignmentAdjustedForLists;
@property (nonatomic) unsigned long long blockQuoteLevel;
@property (nonatomic, readonly) bool canIndent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int hints;
@property (nonatomic) unsigned long long indent;
@property (nonatomic, readonly) bool isBlockQuote;
@property (nonatomic, readonly) bool isHeader;
@property (nonatomic, readonly) bool isList;
@property (nonatomic, readonly) bool isRTL;
@property (nonatomic, readonly) long long layoutWritingDirection;
@property (nonatomic) bool needsListCleanup;
@property (nonatomic) bool needsParagraphCleanup;
@property (nonatomic, readonly) bool preferSingleLine;
@property (nonatomic) unsigned long long startingItemNumber;
@property (nonatomic) unsigned int style;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICTTTodo *todo;
@property (nonatomic, readonly) NSUUID *todoTrackingUUID;
@property (nonatomic, readonly) bool uniqueToLine;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, readonly) bool wantsFollowingNewLine;
@property (nonatomic) long long writingDirection;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)defaultParagraphStyle;
+ (int)paragraphStyleAlignmentForTextAlignment:(long long)arg1;
+ (id)paragraphStyleNamed:(unsigned int)arg1;
+ (bool)supportsSecureCoding;
+ (long long)textAlignmentForParagraphStyleAlignment:(int)arg1;

- (void).cxx_destruct;
- (long long)alignment;
- (unsigned long long)blockQuoteLevel;
- (bool)canIndent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hints;
- (unsigned long long)indent;
- (id)init;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isBlockQuote;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelComparable:(id)arg1;
- (bool)isEqualToModelParagraphStyle:(id)arg1;
- (bool)isEqualToParagraphStyle:(id)arg1;
- (bool)isHeader;
- (bool)isList;
- (bool)isRTL;
- (bool)isUnknownStyle;
- (id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsListCleanup;
- (bool)needsParagraphCleanup;
- (bool)preferSingleLine;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (void)setAlignment:(long long)arg1;
- (void)setBlockQuoteLevel:(unsigned long long)arg1;
- (void)setHints:(unsigned int)arg1;
- (void)setIndent:(unsigned long long)arg1;
- (void)setNeedsListCleanup:(bool)arg1;
- (void)setNeedsParagraphCleanup:(bool)arg1;
- (void)setStartingItemNumber:(unsigned long long)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTodo:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWritingDirection:(long long)arg1;
- (unsigned long long)startingItemNumber;
- (unsigned int)style;
- (id)todo;
- (id)todoTrackingUUID;
- (bool)uniqueToLine;
- (id)uuid;
- (bool)wantsFollowingNewLine;
- (long long)writingDirection;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (long long)alignmentAdjustedForLists;
- (long long)layoutWritingDirection;

@end
