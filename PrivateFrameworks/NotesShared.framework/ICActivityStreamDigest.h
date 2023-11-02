
@interface ICActivityStreamDigest : NSObject {
    NSDate * _lastActivitySummaryViewedDate;
    id  _recentActivityEventsStorage;
    NSDate * _recentUpdatesGenerationDate;
    <ICActivityEventResolving> * _resolverStorage;
}

@property (nonatomic, readonly) bool hasRecentUpdates;
@property (nonatomic, readonly) bool hasUnseenHighlights;
@property (nonatomic, readonly) bool hasUnseenSummary;
@property (nonatomic, readonly) bool isCurrentUserMentionedInRecentSummary;
@property (nonatomic, copy) NSDate *lastActivitySummaryViewedDate;
@property (nonatomic, readonly) bool objc_hasRecentUpdates;
@property (nonatomic, readonly) bool objc_hasUnseenHighlights;
@property (nonatomic, readonly) bool objc_hasUnseenSummary;
@property (nonatomic, readonly) bool objc_isCurrentUserMentionedInRecentSummary;
@property (nonatomic, readonly) ICTTTextEditFilter *objc_recentUpdatesFilter;
@property (nonatomic, readonly) NSValue *objc_recentUpdatesRangeValue;
@property (nonatomic, retain) id recentActivityEventsStorage;
@property (nonatomic, readonly) ICTTTextEditFilter *recentUpdatesFilter;
@property (nonatomic, copy) NSDate *recentUpdatesGenerationDate;
@property (nonatomic, readonly) NSValue *recentUpdatesRangeValue;
@property (nonatomic, readonly) <ICActivityEventResolving> *resolverStorage;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void).cxx_destruct;
- (bool)hasRecentUpdates;
- (bool)hasUnseenHighlights;
- (bool)hasUnseenSummary;
- (id)initWithResolver:(id)arg1;
- (bool)isCurrentUserMentionedInFilter:(id)arg1;
- (bool)isCurrentUserMentionedInRecentSummary;
- (id)lastActivitySummaryViewedDate;
- (bool)objc_hasRecentUpdates;
- (bool)objc_hasUnseenHighlights;
- (bool)objc_hasUnseenSummary;
- (bool)objc_isCurrentUserMentionedInFilter:(id)arg1;
- (bool)objc_isCurrentUserMentionedInRecentSummary;
- (id)objc_recentUpdatesFilter;
- (id)objc_recentUpdatesRangeValue;
- (id)recentActivityEventsStorage;
- (id)recentUpdatesFilter;
- (id)recentUpdatesGenerationDate;
- (id)recentUpdatesRangeValue;
- (id)resolverStorage;
- (void)setLastActivitySummaryViewedDate:(id)arg1;
- (void)setRecentActivityEventsStorage:(id)arg1;
- (void)setRecentUpdatesGenerationDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)initWithObject:(id)arg1;
- (id)objc_initWithObject:(id)arg1 error:(id*)arg2;

@end
