
@interface _ICNAFolderReportToDevice : NSObject {
    int  _folderCollaborationMatrix;
}

- (unsigned long long)countOfFoldersWithCollaborationStatus:(long long)arg1 collaborationType:(long long)arg2;
- (id)init;
- (void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)arg1 collaborationType:(id)arg2;

@end
