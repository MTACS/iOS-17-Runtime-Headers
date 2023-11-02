
@interface MFDAMessageStore : MFLibraryStore {
    DAFolder * _DAFolder;
    bool  _backedByVirtualAllSearchMailbox;
}

@property (nonatomic) bool backedByVirtualAllSearchMailbox;

- (void).cxx_destruct;
- (id)_downloadHeadersForMessages:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4;
- (bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 consumer:(id)arg4;
- (void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 filterByDate:(bool)arg5 handler:(id /* block */)arg6;
- (bool)allowsAppend;
- (bool)backedByVirtualAllSearchMailbox;
- (id)bestAlternativeForPart:(id)arg1;
- (bool)bodyFetchRequiresNetworkActivity;
- (bool)canFetchSearchResults;
- (id)defaultAlternativeForPart:(id)arg1;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(bool)arg2;
- (id)fetchBodyDataForRemoteID:(id)arg1;
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)fetchWindow;
- (id)folderIDForFetching;
- (unsigned long long)growFetchWindow;
- (bool)hasMoreFetchableMessages;
- (id)initWithMailbox:(id)arg1 readOnly:(bool)arg2;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (bool)messageCanBeTriaged:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1;
- (bool)replayFlagChange:(id)arg1 forRemoteIDs:(id)arg2 error:(id*)arg3 completed:(bool*)arg4;
- (void)setBackedByVirtualAllSearchMailbox:(bool)arg1;
- (bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (bool)shouldGrowFetchWindow;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(bool)arg3;
- (id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(id*)arg4;
- (bool)wantsLineEndingConversionForMIMEPart:(id)arg1;

@end
