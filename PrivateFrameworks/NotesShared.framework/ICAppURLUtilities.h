
@interface ICAppURLUtilities : NSObject

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)URLForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)URLWithSchemeForString:(id)arg1;
+ (id)appURLForContainingFolderWithNoteFocused:(id)arg1;
+ (id)appURLForDefaultFolder;
+ (id)appURLForFolder:(id)arg1;
+ (id)appURLForFolderList;
+ (id)appURLForHTMLFolder:(id)arg1;
+ (id)appURLForHTMLNote:(id)arg1;
+ (id)appURLForNote:(id)arg1;
+ (id)appURLForNote:(id)arg1 inFolder:(id)arg2;
+ (id)appURLForShowSmartFoldersHelp;
+ (id)attachmentIdentifierFromQuickNoteURL:(id)arg1;
+ (id)contentOffsetFromQuickNoteURL:(id)arg1;
+ (id)entityURIForNote:(id)arg1;
+ (id)firstQueryItemInURL:(id)arg1 andHost:(id)arg2 andQueryItemName:(id)arg3;
+ (id)folderIdentifierForShowNoteURL:(id)arg1;
+ (bool)isHTMLFolderEntityURI:(id)arg1;
+ (bool)isHTMLNoteEntityURI:(id)arg1;
+ (bool)isLaunchingQuickNoteViaPencil:(id)arg1;
+ (bool)isModernFolderEntityURI:(id)arg1;
+ (bool)isModernNoteEntityURI:(id)arg1;
+ (bool)isNewNoteURL:(id)arg1;
+ (bool)isQuickNoteModeURL:(id)arg1;
+ (bool)isShowDefaultFolderURL:(id)arg1;
+ (bool)isShowFolderListURL:(id)arg1;
+ (bool)isShowFolderURL:(id)arg1;
+ (bool)isShowFolderURL:(id)arg1 options:(unsigned long long)arg2;
+ (bool)isShowHTMLFolderURL:(id)arg1;
+ (bool)isShowHTMLFolderURL:(id)arg1 options:(unsigned long long)arg2;
+ (bool)isShowHTMLNoteURL:(id)arg1;
+ (bool)isShowLegacyNoteURL:(id)arg1;
+ (bool)isShowNoteFocusedInFolderURL:(id)arg1;
+ (bool)isShowNoteURL:(id)arg1;
+ (bool)isShowNoteURL:(id)arg1 options:(unsigned long long)arg2;
+ (bool)isShowPaperURL:(id)arg1;
+ (bool)isShowSmartFoldersHelpURL:(id)arg1;
+ (bool)isSystemPaperURL:(id)arg1;
+ (id)modernNoteIdentifierFromEntityURI:(id)arg1;
+ (id)noteIdentifierFromNotesAppURL:(id)arg1;
+ (id)noteIdentifierFromQuickNoteURL:(id)arg1;
+ (id)objectIDForHTMLFolderEntityURI:(id)arg1 context:(id)arg2;
+ (id)objectIDForHTMLFolderMentionedInURL:(id)arg1 context:(id)arg2;
+ (id)objectIDForHTMLFolderMentionedInURL:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
+ (id)objectIDForModernFolderEntityURI:(id)arg1 noteContext:(id)arg2;
+ (id)objectIDForModernFolderMentionedInURL:(id)arg1 noteContext:(id)arg2;
+ (id)objectIDForModernFolderMentionedInURL:(id)arg1 options:(unsigned long long)arg2 noteContext:(id)arg3;
+ (id)objectIDURIRepresentationForFolderMentionedInLegacyShowFolderURL:(id)arg1;
+ (id)objectIDURIRepresentationForFolderMentionedInLegacyShowHTMLFolderURL:(id)arg1;
+ (id)objectIDURIRepresentationForHTMLNoteEntityURI:(id)arg1 context:(id)arg2;
+ (id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg1;
+ (id)predicateForFolderWithNoteFocusedInURL:(id)arg1;
+ (id)predicateForNotesMentionedInURL:(id)arg1;
+ (id)predicateForNotesMentionedInURL:(id)arg1 action:(id)arg2;
+ (id)predicateForNotesMentionedInURL:(id)arg1 action:(id)arg2 queryItemName:(id)arg3;
+ (id)predicateForNotesWithIdentifier:(id)arg1;
+ (id)predicateForVisibleNotesMentionedInURL:(id)arg1;
+ (bool)quickNoteURLIsContinuing:(id)arg1;
+ (bool)quickNoteURLShouldShowList:(id)arg1;
+ (bool)quickNoteURLShouldShowShareSheet:(id)arg1;
+ (bool)quickNoteURLShouldShowiCloudShareSheet:(id)arg1;
+ (id)referralURLForSnapshotBackgroundTask;
+ (id)urlForQuickNoteWithOptions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)appURLForNote:(id)arg1 inVirtualSmartFolder:(id)arg2;
+ (id)appURLForNoteIdentifier:(id)arg1 inVirtualSmartFolder:(id)arg2 actionName:(id)arg3;
+ (id)appURLForVirtualSmartFolder:(id)arg1;
+ (bool)isShowNoteInVirtualSmartFolderURL:(id)arg1;
+ (bool)isShowVirtualSmartFolderURL:(id)arg1;
+ (id)notePredicateFromNoteInVirtualSmartFolderInURL:(id)arg1;
+ (id)virtualSmartFolderMentionedInURL:(id)arg1 context:(id)arg2;

@end
